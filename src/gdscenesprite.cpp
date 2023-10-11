#include "gdscenesprite.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void GDSceneSprite::_bind_methods() {
	ClassDB::bind_method(D_METHOD("get_amplitude"), &GDSceneSprite::get_amplitude);
	ClassDB::bind_method(D_METHOD("set_amplitude", "p_amplitude"), &GDSceneSprite::set_amplitude);
	ClassDB::add_property("GDSceneSprite", PropertyInfo(Variant::FLOAT, "amplitude"), "set_amplitude", "get_amplitude");

	ClassDB::bind_method(D_METHOD("get_speed"), &GDSceneSprite::get_speed);
	ClassDB::bind_method(D_METHOD("set_speed", "p_speed"), &GDSceneSprite::set_speed);
	ClassDB::add_property("GDSceneSprite", PropertyInfo(Variant::FLOAT, "speed", PROPERTY_HINT_RANGE, "0,20,0.01"), "set_speed", "get_speed");
}

GDSceneSprite::GDSceneSprite() {
	// Initialize any variables here.
	time_passed = 0.0;
	amplitude = 10.0;
	speed = 1.0;
}

GDSceneSprite::~GDSceneSprite() {
	// Add your cleanup here.
}

void GDSceneSprite::_process(double delta) {
	time_passed += speed * delta;

	Vector2 new_position = Vector2(
		amplitude + (amplitude * sin(time_passed * 2.0)),
		amplitude + (amplitude * cos(time_passed * 1.5))
	);

	set_position(new_position);
}

void GDSceneSprite::set_amplitude(const double p_amplitude) {
	amplitude = p_amplitude;
}

double GDSceneSprite::get_amplitude() const {
	return amplitude;
}

void GDSceneSprite::set_speed(const double p_speed) {
	speed = p_speed;
}

double GDSceneSprite::get_speed() const {
	return speed;
}