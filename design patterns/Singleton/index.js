let instance;
let counter = 0;
class Singleton {
  constructor() {
    if (instance) {
      throw new Error("Instance already exists");
    } else {
      instance = this;
    }
  }
  getInstance() {
    console.log("getInstance called", this);
    return instance;
  }
  increaseCounter() {
    counter++;
  }
  getCounter() {
    console.log(counter);
  }
}
// object.freeze() is used to prevent the object from being modified
const s1 = Object.freeze(new Singleton());
// Error gets in the following

const s2 = new Singleton();
// const s2 = Object.freeze(new Singleton());
s1.getInstance();
s1.increaseCounter();
s1.getCounter();
s2.getInstance();
s2.getCounter();
// You will get error because you can't create multiple objects with the same instances in js as objects are passed by reference
