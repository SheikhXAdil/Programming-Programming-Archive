const questions = [
    {
        "Question": "What is the inherited type for the variable example in 'const example = ['Dylan']'?",
        "options": [
            "any[]",
            "string[]",
            "string",
            "unknown[]"
        ],
        "correct": "string[]"
    },
    {
        "Question": "TypeScript will always correctly infer the type of an array.",
        "options": [
            "True",
            "False",
            "...",
            "..."
        ],
        "correct": "False"
    },
    {
        "Question": "True or False: a Tuple and an Array are the same thing when discussing types",
        "options": [
            "True",
            "False",
            "...",
            "..."
        ],
        "correct": "False"
    },
    {
        "Question": "How many components typescript has?",
        "options": [
            "3",
            "4",
            "5",
            "6"
        ],
        "correct": "3"
    },
    {
        "Question": "TypeScript is ?",
        "options": [
            "Case-sensitive",
            "Case-insensitive",
            "depends on typescript version",
            "none of the above"
        ],
        "correct": "Case-sensitive"
    },
    {
        "Question": "Which is a successful example of this tuple '[number, string]'?",
        "options": [
            "const ourTuple = [101]",
            "const ourTuple = ['Coding God', 101]",
            "const ourTuple = [101, 101, 'Coding God', 'Coding God']",
            "const ourTuple = [101, 'Coding God']"
        ],
        "correct": "const ourTuple = [101, 'Coding God']"
    },
    {
        "Question": "Type Aliases are mostly used with ______.",
        "options": [
            "Strings",
            "Booleans",
            "Numbers",
            "None of the above"
        ],
        "correct": "Strings"
    },
    {
        "Question": "What is the type of the parameter: 'function ex(param1?: string){}'?",
        "options": [
            "string",
            "string | undefined",
            "string | null",
            "any"
        ],
        "correct": "string | undefined"
    },
    {
        "Question": "A ________ in terms of OOP is a blueprint for creating objects.",
        "options": [
            "polymerization",
            "method",
            "class",
            "constructor"
        ],
        "correct": "class"
    },
    {
        "Question": "What does the 'readonly' access modifier do for an array variable assignment like: 'const codeNames: readonly string[] = ['Coding', 'God']'?",
        "options": [
            "Makes you read it for better clean code",
            "Allows only adding but not deleting elements in the array",
            "Makes it private and can only be used in the file its created",
            "Allows no changes and is there simply to be read from and not modified"
        ],
        "correct": "Allows no changes and is there simply to be read from and not modified"
    },
];
export { questions };
