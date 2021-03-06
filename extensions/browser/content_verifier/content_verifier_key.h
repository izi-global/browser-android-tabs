// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_BROWSER_CONTENT_VERIFIER_CONTENT_VERIFIER_KEY_H_
#define EXTENSIONS_BROWSER_CONTENT_VERIFIER_CONTENT_VERIFIER_KEY_H_

#include <stdint.h>

namespace extensions {

// A pointer to the bytes of a public key, and the number of bytes for content
// verification.
struct ContentVerifierKey {
  const uint8_t* data;
  size_t size;

  ContentVerifierKey(const uint8_t* data, size_t size)
      : data(data), size(size) {}
};

}  // namespace extensions

#endif  // EXTENSIONS_BROWSER_CONTENT_VERIFIER_CONTENT_VERIFIER_KEY_H_
