// Copyright(C) 2014 kittikun
//
// This program is free software : you can redistribute it and / or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.If not, see <http://www.gnu.org/licenses/>.

#include <boost/test/unit_test.hpp>
#include <memory>

#include <dominion/core/dice.h>

#include "../testFramework.h"

struct DiceFixture : public BaseFixture < DiceFixture, std::chrono::microseconds > {
	DiceFixture() :
		BaseFixture("Dominion_Dice.csv", { "Roll" }),
		dice(new Dominion::Dice())
	{
	}

	std::unique_ptr<Dominion::Dice> dice;
};

BOOST_FIXTURE_TEST_SUITE(Dominion_Dice, DiceFixture)

BOOST_AUTO_TEST_CASE(Roll)
{
	TestFunc(1000, [&] {
		const uint_fast8_t rnd = dice->Roll();
		BOOST_CHECK((rnd > 0) && (rnd <= 12));
	});
}

BOOST_AUTO_TEST_SUITE_END()