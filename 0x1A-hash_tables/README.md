What is a hash function?

A hash function is a mathematical function that takes an input (or "key") and produces a fixed-size string of characters, which is typically a numerical value. The output, often referred to as a hash code or hash value, is unique for each unique input. Hash functions are designed to be fast to compute and to ensure that even a small change in the input results in a significantly different hash value. Common hash functions include MD5, SHA-1, and SHA-256.
What makes a good hash function?

Properties of a hash function
Deterministic: It always produces the same hash code for the same input.
Fast to compute: It should be efficient to calculate the hash code.
Uniform distribution: Hash values should be uniformly distributed across the range of possible values to minimize collisions.
Avalanche effect: A small change in the input should result in a significantly different hash value.
Pre-image resistance: Given a hash code, it should be computationally infeasible to determine the original input.
Collision resistance: It should be computationally difficult to find two different inputs that produce the same hash value.
What is a hash table, how do they work, and how to use them?

Hash tables are data structures that store key-value pairs and use a hash function to efficiently store and retrieve values based on their keys.
What is a collision, and what are the main ways of dealing with collisions in the context of a hash table?

A collision occurs in a hash table when two different keys hash to the same index in the underlying array. Collisions are inevitable due to the finite number of hash values and the potentially infinite number of keys.
Common methods to deal with collisions:
Chaining: Each slot in the hash table contains a linked list (or another data structure like a binary search tree), and when a collision occurs, the key-value pairs with the same hash value are stored in this list.
Open Addressing: In this approach, when a collision occurs, the algorithm searches for the next available slot in the array based on a predefined probing sequence.
Double Hashing: It's a variation of open addressing where a secondary hash function is used to calculate the step size for probing when a collision occurs.
What are the advantages and drawbacks of using hash tables?

Advantages:
Fast average-case time complexity (O(1)) for insertion, retrieval, and deletion.
Efficient for implementing data structures like sets and dictionaries.
Versatile and widely used in various applications.
Drawbacks:
Potential worst-case time complexity (O(n)) when dealing with many collisions.
Memory overhead due to maintaining an array with empty slots.
Hash functions must be well-designed to avoid clustering and minimize collisions.
What are the most common use cases of hash tables?

Hash tables are used in various applications, including:
Implementing dictionaries, associative arrays, and sets.
Caching data for quick retrieval.
Checking for duplicates or membership in a collection.
Counting the frequency of elements in a dataset (e.g., word frequency in text processing).
Storing and managing metadata or data relationships in databases.
Implementing data structures like hash-based maps and hash-based sets.
