/*
 * LineSegment.cc
 *
 *  Created on: 2018��3��12��
 *      Author: NETLAB
 */
#include "inet/common/geometry/object/LineSegment.h"

namespace inet {

const LineSegment LineSegment::NIL(Coord::NIL, Coord::NIL);

LineSegment::LineSegment() :
    point1(Coord::NIL),
    point2(Coord::NIL)
{
}

LineSegment::LineSegment(const Coord& point1, const Coord& point2) :
    point1(point1),
    point2(point2)
{
}

bool LineSegment::computeIntersection(const LineSegment& lineSegment, Coord &intersection1, Coord &intersection2)
{
    // TODO:
    throw cRuntimeError("Not yet implemented");
}

} // namespace inet





