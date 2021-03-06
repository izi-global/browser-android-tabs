// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/platform/event_dispatch_forbidden_scope.h"

namespace blink {

#if DCHECK_IS_ON()
unsigned EventDispatchForbiddenScope::count_ = 0;
#endif  // DECHECK_IS_ON()

}  // namespace blink
