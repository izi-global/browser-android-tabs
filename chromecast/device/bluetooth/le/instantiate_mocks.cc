// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file just instantiates mocks to verify they can compile since no one
// uses them yet.

#include "chromecast/device/bluetooth/le/mock_gatt_client_manager.h"
#include "chromecast/device/bluetooth/le/mock_le_scan_manager.h"
#include "chromecast/device/bluetooth/le/mock_remote_characteristic.h"
#include "chromecast/device/bluetooth/le/mock_remote_descriptor.h"
#include "chromecast/device/bluetooth/le/mock_remote_device.h"
#include "chromecast/device/bluetooth/le/mock_remote_service.h"

namespace chromecast {
namespace bluetooth {

void InstantiateMocks() {
  MockGattClientManager a;
  MockLeScanManager b;
  scoped_refptr<MockRemoteCharacteristic> c = new MockRemoteCharacteristic;
  scoped_refptr<MockRemoteDescriptor> d = new MockRemoteDescriptor;
  scoped_refptr<MockRemoteDevice> e = new MockRemoteDevice;
  scoped_refptr<MockRemoteService> f = new MockRemoteService;
}

}  // namespace bluetooth
}  // namespace chromecast
