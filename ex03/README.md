____ EX03 ____

### 1 - AMateria

La classe AMateria est abstraite. C'est d'elle que vont heriter nos classes Ice et Cure.

Elle a un attribut protected type, un virtual destructor pour éviter les leaks, respecte la forme canonique, et dispose d'une méthode abstraite pure clone, et d'une fonction virtual use. Elle ne peut pas être instanciée seule.

* La méthode **virtual** simple use permet de **définir un comportement de base** pour la fonction dont vont hériter Ice et Cure. Cependant, elle laisse la possibilité de **redéfinir la méthode**.
* La méthode **virtual pure** clone elle n'offre aucun comportement de base, elle oblige seulement Ice et Cure **à** **redéfinir une fonction clone** qui leur est **propre**.

Ses classes dérivées sont Ice et Cure.

### 1a - Ice / Cure

Les classes Ice/Cure sont concrètes.

* Elles respectent la forme canonique.
* Héritent de AMateria
* Redéfinissent les fonctions use et clone pour qu'elles leur soient propre.
* Ont un attribut "type".

### 2 - ICharacter

La classe ICharacter est une classe abstraite pure, soit une **interface**.

* Elle n'a aucun attributs
* Toutes ses méthodes de classes sont virtual pure : Elle oblige les classes dérivées à définir ses fonctions.
* Elle n'est pas instanciable, et à la différence de AMateria, elle ne respecte pas la forme canonique, et ne comporte aucun constructeur. Cependant elle a bien un virtual destructor.
* Sa classe dérivée est Character.

### 3 - Character

La classe Character est une classe concrète.

* Elle respecte la forme canonique.
* Hérite de l'interface ICharacter, donc doit en redéfinir toutes les méthodes.
* Précision : Même si ICharacter n'a pas de constructeur, le constructeur de Character doit ressembler à ça :

  ```cpp
  Character::Character() : ICharacter(), name("default")
  ```
* Elle déclare des attributs name et surtout un attribut privé AMateria* inventory[4]. Ce qui signifie qu'elle a un tableau de 4 pointeurs AMateria, qu'il va falloir gérer dynamiquement.

### 4 - Les inclusions 

En CPP, les includes deviennent plus touchy. Voiçi quelques règles qui encadrent leur utilisation.

* On inclût que des fichiers .hpp.
* Il est important d'éviter les dépendances circulaires. Par exemple, dans les fichiers .cpp on va inclure les .hpp nécessaire.
  Cependant, dans les .hpp, on va faire une forward déclaration. Ce qui signifie qu'on ne va pas inclure de .hpp, mais juste refaire un prototype de la classe que l'on va avoir besoin d'utiliser.

### X - L'inventaire de Character et les Materias.

La fonction unequip ne doit **pas** delete l'instance de la materia (ice/cure) pointé dans son tableau. À la place, on doit handle nous même le comportement, sans avoir de leaks.

Donc, on remet l'idx de l'inventory à nullptr.

```cpp
void Character::unequip(int idx) 
{
	this->inventory[idx] = nullptr;
}
```

Ceci étant, le pointeur contient toujours l'adresse mémoire vers la materia. On ne peut pas le perdre. À mon avis, il peut être intéressant de faire une copie du pointeur avant d'appeler unequip, et une fois unequip appelée, delete la materia dans le main.
