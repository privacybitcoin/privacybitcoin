// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019  The PrivacyBitcoin Developers

// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
  {       1, "d12fbd2d01b7ffb37206267418d89e98af86cb4f1fc8a24ce8c3994a54502ba5"},
  {       2, "23e5d00e0b1211c64050afb15e34041da8c09069a1aa60bf53e9490eb4da751e"},
  {      10, "afdb11e6c1691bb40b4feff753d6a2140f255e37a518b7d3ed8631ab58d65ce0"},
  {     100, "5c590c0597a1208df132c9383ae93433c0c78ea64f9956917315c9b29e72e8e7"},
  {     500, "ac640e8decd302c0a2915ca127fca5c75a1fc8d2a5bdf2283fddeb273d668909"},
  {    1000, "52cfb2126f3e5ce8f32988490f4f46f41f44e1c2851e9815a5e0974897873030"}
  
 };
}
