/**
 * @file include/retdec/fileformat/utils/other.h
 * @brief Simple utilities.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

#ifndef RETDEC_FILEFORMAT_UTILS_OTHER_H
#define RETDEC_FILEFORMAT_UTILS_OTHER_H

#include <string>
#include <vector>

#include "retdec/fileformat/fftypes.h"

namespace retdec {
namespace fileformat {

std::size_t getRealSizeInRegion(std::size_t offset, std::size_t requestedSize, std::size_t regionSize);
std::string getFileFormatNameFromEnum(Format format);
std::vector<std::string> getSupportedFileFormats();
std::vector<std::string> getSupportedArchitectures();
std::string lcidToStr(std::size_t lcid);
std::string codePageToStr(std::size_t cpage);
double computeDataEntropy(const std::uint8_t *data, std::size_t dataLen);

} // namespace fileformat
} // namespace retdec

#endif
