class Duck {
private:
	//鸭子现在会将飞行和呱呱叫的动作，「委托」（delegate）以下两个雷
	FlyBehavior flyBehavior;//飞行行为
	QuackBehavior quackBehavior;//呱呱叫行为
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
