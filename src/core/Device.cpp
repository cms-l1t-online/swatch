// SWATCH HEADERS
#include "include/core/Device.h"

// OTHER HEADERS

// C++ HEADERS
#include <iostream>

using namespace swatch::core;
using namespace std;

Device::Device(const string& id) :
				id_(id),
				state_(Halted),
				txPorts_(),
				rxPorts_() {
	cout << "swatch::core::Device::Device --> Device CTOR called. Id: " << id_
			<< endl;
}

Device::~Device() {
	cout << "swatch::core::Device::~Device --> Device DTOR called. Id " << id_
			<< endl;
}

string Device::getId() {
	return "";
}

void Device::addTx(const Device::shared_port& tx) {
}

void Device::addRx(const Device::shared_port& rx) {
}

void Device::configure() {
}

void Device::enable() {
}

void Device::suspend() {
}

void Device::stop() {

}

void Device::resume() {
}

void Device::test() {
}

void Device::setState(const Device::FSMStates& state) {

}

Device::FSMStates Device::getState() {
	return Device::Halted;
}
