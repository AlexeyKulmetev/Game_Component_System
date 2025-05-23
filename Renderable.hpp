#pragma once
#include "GameObject.hpp"

class Renderable : public GameObject {
public:
	~Renderable() override = default;

	void setVisible(bool value) override {
		visible = value;
	}
};