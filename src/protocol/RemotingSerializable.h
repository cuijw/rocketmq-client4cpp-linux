/**
* Copyright (C) 2013 kangliqiang ,kangliq@163.com
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef __REMOTINGSERIALIZABLE_H__
#define __REMOTINGSERIALIZABLE_H__

#include "RocketMQClient.h"
#include "RefHandle.h"

namespace rmq
{

	/**
	* 复杂对象的序列化，利用json来实现
	*
	*/
	class RemotingSerializable : public kpr::RefCount
	{
	public:
	    virtual ~RemotingSerializable() {};
	    virtual void encode(std::string& outData) = 0;
	};
}

#endif
