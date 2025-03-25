## EX00

## 1 - Catch/Try/Throw

Ces trois keywords permettent de gérer les erreurs de manière contrôlée, en évitant que le programme ne crash.

Ce mécanisme repose sur trois éléments :

Try --> Encapsule le code susceptible de provoquer une erreur.

Throw --> Déclenche une exception si un problème est détecté.

Catch --> Intercepte et gère l'exception.

#### Try

```cpp
try
{
	Bureaucrat test(210001230);
}
```

Ici, on insère le bout de code sensible que l'on souhaite tester.

### Catch

```cpp
try{
	Bureaucrat test(210001230);
}
catch (std::exception &e){
	std::cout << e.what() << std::endl;
}
```

Ici, std::exception &e du catch va dépendre du throw présent dans le constructeur de Bureaucrat.

### Throw

```cpp
Bureaucrat::Bureaucrat(int grade) 
{
	if(grade > 150)
		throw GradeTooHighException();
	std::cout << "Bureaucrat default constructor called!" << std::endl;
}
```

Dans la méthode concerné par le try, (Ici dans le constructeur), on throw une exception si le grade est supérieur à 150.

### Dans le hpp :

```cpp
class Bureaucrat {
	private:

	std::string name;
	int grade;

	public:

	Bureaucrat(int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	std::string getName() const;
	int getGrade() const;

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Grade too high!";
		}
	};
};
```

Il est important de noter que pour créer une exception, on doit déclarer une classe, qui hérite de l'interface std::exception, et redéfinir la méthode *What()* afin de définir le comportement adéquat.
