

// =========================================================================

//				Task2: Game Entity Component System

//		SCENARIO:
//	Implement an Entity class with attachable Components(Renderable, PhysicsBody).
//	Requirements :
//		Safe cross - component communication via dynamic_cast
//		Prevent duplicate component types


//		USAGE EXAMPLE:
//	Entity player;
//	player.addComponent(new PhysicsBody(10.0f));
//	player.addComponent(new Renderable("player.png"));
//
////	 Later:
//	if (auto* renderable = player.getComponent<Renderable>()) {
//		  renderable->setVisible(false);
//}

// =========================================================================