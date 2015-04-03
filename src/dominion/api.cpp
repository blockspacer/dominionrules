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

#include <dominion/api.h>

#include <dominion/core/database.h>
#include <dominion/character/character_utility.h>

#include "impl/api_impl.h"
#include "impl/character_utility_impl.h"

namespace Dominion
{
	Api::Api()
		: impl_(new ApiImpl())
	{
	}

	Api::~Api()
	{
	}

	void Api::InitializeFromMemory()
	{
		impl_->LoadDatabaseFromMemory();
	}

	std::unique_ptr<CharacterUtility> Api::GetCharacterCreationTool()
	{
		return std::unique_ptr < CharacterUtility > {new CharacterUtility{ impl_->MakeCharacterTool() }};
	}

	std::shared_ptr<DataBase> Api::GetDatabase()
	{
		return impl_->database();
	}
} // namespace Dominion
