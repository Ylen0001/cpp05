____ EX02 ____

### 1 - Classe abstraite (2)

Nous avons vu dans l'exercice précédent qu'on pouvait passer une classe en abstraite afin d'allouer dynamiquement des classes dérivés de cette dernière, et pour ce faire, on a passé le destructeur et la fonction makeSound en virtual.

Les conséquences  :

1 - Définir makeSound oblige la redéfinition de la fonction dans les classes enfants. Sinon la compilation échouera. On s'assure donc que cette fonction sera utilisée, mais en étant redéfinie au préalable.

2 - La classe parent n'est plus instanciable.

Les classes abstraites servent à modéliser des **concepts génériques** plutôt que des objets concrets.

* Animal est un **concept**, on ne peut pas le "voir" où "l'entendre" directement.
* Dog et Cat sont des **entités concrètes**, elles peuvent exister avec des comportements bien définis.

Donc, en interdisant d'instancier Animal, on impose une **spécialisation obligatoire** des classes dérivés.

### 2 - Classe abstraite pure (Interface)

À la différence de la classe abstraite basique, qui ne contient que son destructeur et une partie de ses méthodes en virtual pure (= 0), on dit qu'une classe abstraite est pure lorsque la totalité de ses méthodes sont virtual pure. De fait, elle fournit donc une **interface** pour ses classes dérivés : Les méthodes seront obligatoirement **implantées**, mais surtout **redéfinies**.

 **
    🟣  Classe abstraite :**

* Une classe abstraite est constitué d'un destructeur virtual pour éviter les leaks lors de la destruction d'un objet dérivé alloué dynamiquement.
* Elle dispose d'au minimum une fonction virtuelle pure (déclaré dans le .hpp avec le préfixe virtual et le suffixe = 0, non déclarée dans le .cpp.) Qui a pour objectif d'obliger les classes enfants à la redéclarer avec un comportement propre. Les autres méthodes qui la composent sont utilisables tel quel dans les classes dérivées.
* On ne peut pas instancier un objet d'une classe abstraite, cependant elle peut tout de même avoir une **forme canonique**.

  🟠**Classe abstraite pure (Interface) :**
* Une classe abstraite pure n'est composée que de méthodes **virtual pure**, **et ne doit pas avoir de constructeur** !
* C'est une **interface**, une sorte de blueprint servant de base structurelle pour les classes dérivées. Elle oblige ces dernières à redéfinir des fonctions précises, afin de les utiliser d'une façon qui leur est propre.
* Tout comme la classe abstraite de base, elle ne peut pas être instanciée seule. :

 **✅ Conclusion**

* **Si une classe a au moins une méthode virtuelle pure (`= 0`)** → Elle **est abstraite** et ne peut pas être instanciée.
* **Si elle ne contient QUE des méthodes virtuelles pures** → C'est une  **classe abstraite pure (interface)** .
* **Les classes abstraites normales peuvent inclure du code commun** , tandis que  **les classes abstraites pures servent d'interfaces strictes** .

En pratique :

* **Pour un modèle avec un comportement commun mais des méthodes spécifiques → Classe abstraite** .
* **Pour une interface sans aucune implémentation → Classe abstraite pure**.
