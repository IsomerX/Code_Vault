let num: number;
num = 2;

let s: string;
s = "lol";

let b: boolean;
b = true;

let hobbies: string[];
hobbies = ["Sports", "Cooking"];

type Person = {
    name: string;
    age: number;
};

let person: Person;

person = {
    name: "Dhruv",
    age: 19,
};

let people: Person[];

people = [
    {
        name: "tommy",
        age: 10,
    },
];

let course: string | number = "This is a string remember";
course = 22;

const add = (a: number, b: number) => {
    return a + b;
};


function insertAtBeginning<T>(array: T[], value: T){
    const newArray = [value, ...array];
    return newArray;
}

const demo = ["1,2,3"];

const updated = insertAtBeginning(demo, "1");