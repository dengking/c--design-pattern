class Duck {
	FlyBehavior flyBehavior;//发行行为
	QuackBehavior quackBehavior;//叫行为
 
	public Duck() {
	}
 
	public void setFlyBehavior (FlyBehavior fb) {
		flyBehavior = fb;
	}
 
	public void setQuackBehavior(QuackBehavior qb) {
		quackBehavior = qb;
	}
 
	//abstract void display();
  virtual void display()=0;
 
	public void performFly() {
		flyBehavior.fly();
	}
 
	public void performQuack() {
		quackBehavior.quack();
	}
 
	public void swim() {
		std::cout<<"All ducks float, even decoys!";
	}
}
