/* Copyright (C) 2014 BMW Group
 * Author: Juergen Gehring (juergen.gehring@bmw.de)
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef CMBROADCASTSSTUB_H_
#define CMBROADCASTSSTUB_H_

#include "v1/commonapi/communication/TestInterfaceStubDefault.hpp"

namespace v1 {
namespace commonapi {
namespace communication {

class CMBroadcastsStub : public v1_0::commonapi::communication::TestInterfaceStubDefault {
public:
    CMBroadcastsStub();
    virtual ~CMBroadcastsStub();
    void testMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, uint8_t x, 
        testMethodReply_t _reply);
    virtual bool onBTestSelectiveSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client);
        
private:
    bool acceptSubscriptions;
};

} /* namespace v1 */
} /* namespace communication */
} /* namespace commonapi */

#endif /* CMBROADCASTSSTUB_H_ */
