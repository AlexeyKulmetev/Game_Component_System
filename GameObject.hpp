#pragma once

class GameObject {
public:
	virtual ~GameObject() = 0;

	virtual void setVisible(bool value) = 0;

protected:
	bool visible;
};

GameObject::~GameObject() {};