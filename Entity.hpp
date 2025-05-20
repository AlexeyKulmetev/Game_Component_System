#pragma once
#include "PhisicsBody.hpp"
#include "Renderable.hpp"
#include <vector>
#include "GameObject.hpp"


class Entity {
public:
	void addComponent(GameObject* obj) {
		// depending on obj type adding lodic
	}

private:
	PhysicsBody* phisicsBody;
	Renderable* renderable;
};