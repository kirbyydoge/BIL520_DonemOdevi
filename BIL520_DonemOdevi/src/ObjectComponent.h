#pragma once
class GameObject;
class Collider2D;

class ObjectComponent {
public:
	ObjectComponent() : base(nullptr) {}
	~ObjectComponent() {}
	void set_base(GameObject* base) { this->base = base; }
	GameObject* get_base() { return base; }
	virtual void start() {}
	virtual void stop() {}
	virtual void on_collision(Collider2D* other) {}
protected:
	GameObject* base;
};