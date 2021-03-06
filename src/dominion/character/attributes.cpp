// Copyright(C) 2015 kittikun
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sub-license, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// This work is compatible with the Dominion Rules role-playing system.To learn more about
// Dominion Rules, visit the Dominion Rules web site at <http://www.dominionrules.org>

#include <dominion/character/attributes.h>

#include "../impl/attribute_impl.h"

namespace Dominion
{
	Attributes::Attributes(const std::shared_ptr<AttributesImpl>& a) :
		impl_(a)
	{}

	Attributes::~Attributes()
	{}

	const AttributeArray Attributes::asArray() const
	{
		return impl_->array_;
	}

	uint_fast8_t Attributes::agility() const
	{
		return impl_->array_[EAttribute::AttributeAgility];
	}

	uint_fast8_t Attributes::intuition() const
	{
		return impl_->array_[EAttribute::AttributeIntuition];
	}

	uint_fast8_t Attributes::intellect() const
	{
		return impl_->array_[EAttribute::AttributeIntellect];
	}

	uint_fast8_t Attributes::luck() const
	{
		return impl_->array_[EAttribute::AttributeLuck];
	}

	uint_fast8_t Attributes::stamina() const
	{
		return impl_->array_[EAttribute::AttributeStamina];
	}

	uint_fast8_t Attributes::vigour() const
	{
		return impl_->array_[EAttribute::AttributeVigour];
	}
} // namespace Dominion
