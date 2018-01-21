class DecoyDuck:public Duck {
public:
    DecoyDuck() {
		  setFlyBehavior(new FlyNoWay());
		  setQuackBehavior(new MuteQuack());
	  }
	  void display() {
		  std<<cout<<"I'm a duck Decoy";
	  }
}
