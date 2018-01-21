class Duck {
private:
	FlyBehavior flyBehavior;//飞行行为
	QuackBehavior quackBehavior;//发生行为
 public:
	Duck();
 
	void setFlyBehavior (FlyBehavior fb) {
		flyBehavior = fb;
	}
 
	void setQuackBehavior(QuackBehavior qb) {
		quackBehavior = qb;
	}
 
	//abstract void display();
  	virtual void display()=0;//抽象方法
 
	void performFly() {
		flyBehavior.fly();
	}
 
	void performQuack() {
		quackBehavior.quack();
	}
 
	void swim() {
		std::cout<<"All ducks float, even decoys!";
	}
}
