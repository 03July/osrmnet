// Copyright (c) 2016 Surya Suluh and contributors.  All rights reserved.
// Licensed under the MIT License.  See included LICENSE in the project root for license information.

#include "..\Stdafx.h"
#include "..\Coordinate.h"
#include "..\Utils.h"

#include "RouteWayPoint.h"
#include "RouteParameters.h"

#include "osrm/json_container.hpp"
#include "engine/polyline_compressor.hpp"
#include <msclr\marshal_cppstd.h>

using namespace Osrmnet::Route;
using namespace osrm::util::json;

RouteWayPoint^ RouteWayPoint::FromJsonObject(const osrm::util::json::Object& jsonObject)
{
	auto result = gcnew RouteWayPoint();

	result->Hint = Osrmnet::Utils::ConvertFromUtf8(jsonObject.values.at("hint").get<String>().value);
	result->Name = Osrmnet::Utils::ConvertFromUtf8(jsonObject.values.at("name").get<String>().value);
	const auto &location = jsonObject.values.at("location").get<Array>().values;
	result->Location = gcnew Osrmnet::Coordinate(location[1].get<Number>().value, location[0].get<Number>().value);

	return result;
}