// SWATCH HEADERS
#include "include/core/Port.h"

// OTHER HEADERS

// C++ HEADERS
#include <iostream>

using namespace swatch::core;
using namespace std;

Port::Port(const string& id, const shared_device& device, bool enabled) :
				id_(id),
				device_(device),
				enabled_(enabled),
				direction_(),
				link_() {

}

Port::~Port() {

}

void Port::setTxDirection() {
//	direction_ = OUT;
}

void Port::setRxDirection() {
//	direction_ = IN;
}

Port::PortDirection Port::getDirection() {
	return direction_;
}

void Port::setLink(const shared_link& link) {
	link_ = link;
}