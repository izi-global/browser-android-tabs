// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef V8TestNotEnumerableNamedGetter_h
#define V8TestNotEnumerableNamedGetter_h

#include "bindings/core/v8/generated_code_helper.h"
#include "bindings/core/v8/native_value_traits.h"
#include "bindings/core/v8/to_v8_for_core.h"
#include "bindings/core/v8/v8_binding_for_core.h"
#include "bindings/tests/idls/modules/test_not_enumerable_named_getter.h"
#include "modules/modules_export.h"
#include "platform/bindings/script_wrappable.h"
#include "platform/bindings/v8_dom_wrapper.h"
#include "platform/bindings/wrapper_type_info.h"
#include "platform/heap/handle.h"

namespace blink {

class V8TestNotEnumerableNamedGetter {
  STATIC_ONLY(V8TestNotEnumerableNamedGetter);
 public:
  MODULES_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static TestNotEnumerableNamedGetter* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<TestNotEnumerableNamedGetter>();
  }
  MODULES_EXPORT static TestNotEnumerableNamedGetter* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
  MODULES_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
  static const int internalFieldCount = kV8DefaultWrapperInternalFieldCount;

  // Callback functions

  MODULES_EXPORT static void namedPropertyGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void indexedPropertyDescriptorCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<TestNotEnumerableNamedGetter> : public NativeValueTraitsBase<TestNotEnumerableNamedGetter> {
  MODULES_EXPORT static TestNotEnumerableNamedGetter* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static TestNotEnumerableNamedGetter* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<TestNotEnumerableNamedGetter> {
  typedef V8TestNotEnumerableNamedGetter Type;
};

}  // namespace blink

#endif  // V8TestNotEnumerableNamedGetter_h
