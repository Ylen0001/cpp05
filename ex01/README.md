___ EX01 ___

### 1 - Shallow copy vs Deep copy

Lorsque l'on touche à l'héritage, notamment dans le cas du polymorphisme dynamique, la gestion de la mémoire est primordiale.

Dans notre cas, on a par exemple les classes Dog & Cat qui ont un attribut Brain* ideas en private. De fait, une instance de Dog va donc dans son constructeur faire appel au constructeur de Brain, et avoir en attribut un pointeur sur cet objet. On est ici sur une allocation dynamique.

Si on décide de faire une copie de Dog, on a deux options dans le copy constructeur :

1 - Effectuer une shallow copy

```cpp
this->ideas = other.ideas;
```

Dans ce cas, on transmet le pointeur sur la zone mémoire de other.ideas a this. Ça pose plusieurs problèmes. Seule l'adresse est copiée, pas la data en mémoire. Donc, si ideas est modifié dans other, elle sera également modifiée dans this. D'autre part, si other.ideas est supprimé, this->ideas ne pourra plus être reached. Donc on a un risque de crash + double delete.

2 - Effectuer une deep copy

```cpp
this->ideas = new Brain(*other.ideas);
```

Ici, on ne copie pas le pointeur, mais on réalloue une nouvelle zone mémoire pour un nouvel objet ideas, en utilisant le copy constructor de Brain, avec en paramêtre other.ideas. Désormais, plus de problèmes si un des objets est modifié, puisque ce n'est plus un objet partagé entre deux instances, mais bien un objet par instance.

### 2 - Classe Abstraite

Une classe est dite abstraite si elle contient au moins une méthode virtuelle pure.

Dans le cas d'Animal, makeSound et le destructeur sont en virtual. Une classe abstraite ne peut pas être instanciée directement. Elle ne peut que servir de base pour une allocation dynamique d'une de ses classe héritière. 

Exemple :

```cpp
Animal* animal = new Dog();
animal->makeSound(); // Appelle makeSound() de Dog
delete animal;
```

b - Virtual Destructor

Pour une classe abstraite, il est nécessaire d'avoir un destructeur virtual. Sans ça, au moment de la destruction d'un objet d'une classe dérivé (via un pointeur comme dans l'exemple) seul le destructeur de la classe de base sera appelé. = Leaks.


En résumé, on déclare toujours un virtual destructor dans une classe de base polymorphique.


### 3 -
