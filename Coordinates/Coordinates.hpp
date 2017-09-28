/**
 * \class Coordinates
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#ifndef COORDINATES_HPP
#define COORDINATE_HPP

#include <iostream>
//#include <list>
//#include <cfloat> // FLT_MIN
#include <cmath> // abs
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <memory>
//#include <utility>
//#include <type_traits>

struct geo_location{
    short int degrees;
    short int minutes;
    short int seconds;
    float total_degrees_value;
};

class Coordinates{
  public: 
    Coordinates(geo_location width,geo_location length);
    float distanceFrom(Coordinates differentCity);
  private:
    geo_location width;
    geo_location length;
};

#endif // COORDINATES_HPP
