const person = {
  name: "Shereef",
  age: 25,
  gender: "male",
};

const proxy = new Proxy(person, {
  get: (obj, prop) => {
    console.log(obj[prop]);
  },
  set: (obj, prop, value) => {
    obj[prop] = value;
    console.log(`value ${obj[prop]} changed to ${value} `);
  },
});

const proxyWithReflect = new Proxy(person, {
  get: (obj, prop) => {
    Reflect.get(obj, prop);
  },
  set: (obj, prop, value) => {
    Reflect.set(obj, prop, value);
  },
});
proxy.age = 30;
console.log(proxy.age);
console.log(proxyWithReflect.name);
proxyWithReflect.name = "not shereef";
