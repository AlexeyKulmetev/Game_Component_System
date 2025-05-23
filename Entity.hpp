#pragma once
#include "PhisicsBody.hpp"
#include "Renderable.hpp"
#include "GameObject.hpp"
#include <typeindex>


class Entity {
public:
	void addComponent(GameObject* obj) {
		// depending on obj type adding lodic
	}

	// need tamplate ?
	GameObject* getComponent() {

	}



private:
	PhysicsBody* phisicsBody;
	Renderable* renderable;
};