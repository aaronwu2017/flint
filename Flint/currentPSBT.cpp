#include <Arduino.h>

#include "CurrentPSBT.h"
#include "ur-encoder.hpp"

#include "ur.hpp"
CurrentPSBT& CurrentPSBT::getInstance() {
    static CurrentPSBT instance;
    return instance;
}
void CurrentPSBT::setPSBT(const PSBT& newPSBT) {
    psbt = newPSBT;
}

PSBT CurrentPSBT::getPSBT() {
     return psbt;
}

CurrentPSBT::CurrentPSBT() : encoder(nullptr), startExporting(false) {
    // Other initializations if necessary
}

CurrentPSBT::~CurrentPSBT() {
    // Cleanup resources if needed
}

std::string CurrentPSBT::getNextPart() {
    if (encoder) {
        return encoder->next_part();
    }
    // Handle the case when encoder is not initialized
    return std::string();
}

void CurrentPSBT::setStartExporting(bool value) {
    startExporting = value;
}

bool CurrentPSBT::getStartExporting() const {
    return startExporting;
}

void CurrentPSBT::setStartReceiving(bool value) {
    startReceiving = value;
}

bool CurrentPSBT::getStartReceiving() const {
    return startReceiving;
}

void CurrentPSBT::initializeEncoder(const ur::UR& ur, size_t max_fragment_len, uint32_t first_seq_num, size_t min_fragment_len) {
    encoder = std::make_unique<ur::UREncoder>(ur, max_fragment_len, first_seq_num, min_fragment_len);
    // Additional setup if necessary
}
void CurrentPSBT::setEncoder(std::unique_ptr<ur::UREncoder> newEncoder) {
    encoder = std::move(newEncoder);
}

void CurrentPSBT::setDecoder(std::unique_ptr<ur::URDecoder> newDecoder) {
    decoder = std::move(newDecoder);
}

void CurrentPSBT::receivePart(const std::string& part) {
    if (decoder) {
        decoder->receive_part(part);
    }
    // Handle the case when decoder is not initialized
}

bool CurrentPSBT::isDecodeSuccess() const {
    return decoder && decoder->is_success();
}

ur::UR CurrentPSBT::getDecodedUR() const {
    // if (decoder && decoder->is_success()) {
      
    // }
    // return ur::UR(); // Return an empty UR if decoding is not successful
      return decoder->result_ur();
}
double CurrentPSBT::estimated_percent_complete() const {
    if (decoder) {
        // Assuming decoder has a method to estimate percent complete
        return decoder->estimated_percent_complete();
    }
    return 0.0; // Return 0 or some other indicator if decoder is not initialized
}

bool CurrentPSBT::is_failure() const {
    if (decoder && decoder->result()) {
        // Assuming decoder's result method returns an optional type that can contain an exception
        return std::holds_alternative<std::exception>(decoder->result().value());
    }
    return false; // Default to no failure if there's no result or if the decoder is not initialized
}