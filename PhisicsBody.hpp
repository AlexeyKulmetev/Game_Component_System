#pragma once
#include "GameObject.hpp"

class PhysicsBody : public GameObject {
public:
	~PhysicsBody() override = default;

	void setVisible(bool value) override {
		visible = value;
	}
};