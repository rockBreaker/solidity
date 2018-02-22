/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file TestHelper.h
 */

#pragma once

#include <libsolidity/interface/EVMVersion.h>

#include <boost/test/unit_test.hpp>
#include <boost/filesystem.hpp>
#include <boost/version.hpp>

#include <functional>

namespace dev
{
namespace test
{

struct Options: boost::noncopyable
{
	std::string ipcPath;
	bool showMessages = false;
	std::string evmVersion;
	bool optimize = false;
	bool disableIPC = false;
	bool disableSMT = false;

	static Options const& get();

private:
	Options();
};

}
}
