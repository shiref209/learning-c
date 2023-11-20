class Animal {
  constructor(name, type) {
    this.name = name;
    this.type = type;
  }
  move() {
    console.log("im moving");
  }
}

const dog = new Animal();
dog.move();
console.log(Animal.prototype);
console.log(dog.__proto__);
Animal.prototype.speak = () => console.log("im speaking");
dog.speak();
console.log(dog.__proto__);
