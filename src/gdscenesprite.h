#pragma once

#include <godot_cpp/classes/sprite2d.hpp>

namespace godot {

class GDSceneSprite : public Sprite2D {
	GDCLASS(GDSceneSprite, Sprite2D)

private:
	double time_passed;
	double amplitude;
	double speed;

protected:
	static void _bind_methods();

public:
	GDSceneSprite();
	~GDSceneSprite();

	void _process(double delta);

	void set_amplitude(const double p_amplitude);
	double get_amplitude() const;

	void set_speed(const double p_speed);
	double get_speed() const;
};

}
