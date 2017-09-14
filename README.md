# Програмування мовою C++

## Мета

- **Оволодіти** основами мови програмування [C++](https://ru.wikipedia.org/wiki/C%2B%2B).
- **Отримати** навички розробки програм з використанням принципів [ООП](https://ru.wikipedia.org/wiki/%D0%9E%D0%B1%D1%8A%D0%B5%D0%BA%D1%82%D0%BD%D0%BE-%D0%BE%D1%80%D0%B8%D0%B5%D0%BD%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%BD%D0%BE%D0%B5_%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5).
- **Ознайомитись** зі стандартною бібліотекою [STL](https://ru.wikipedia.org/wiki/%D0%A1%D1%82%D0%B0%D0%BD%D0%B4%D0%B0%D1%80%D1%82%D0%BD%D0%B0%D1%8F_%D0%B1%D0%B8%D0%B1%D0%BB%D0%B8%D0%BE%D1%82%D0%B5%D0%BA%D0%B0_%D1%88%D0%B0%D0%B1%D0%BB%D0%BE%D0%BD%D0%BE%D0%B2).

---

<span id="soft"></span>
## Програмні засоби та інструменти

1. [Visual Studio Community](https://www.visualstudio.com/free-developer-offers/) - інтегроване середовище розробки.

2. [Doxygen](http://www.stack.nl/~dimitri/doxygen/download.html#srcbin) <span id="doxy"></span> - система документування початкового коду (див. файл [doxy.pdf](https://github.com/ntxone/temp/raw/master/doc/doxy.pdf)). Додатково встановити:
	- [Graphviz](http://www.graphviz.org/Download.php) - Graph Visualization Software;
	- [Mscgen](http://www.mcternan.me.uk/mscgen/) - Message Sequence Chart Renderer.

3. [TortoiseSVN](http://tortoisesvn.net/downloads.html) <sup><abbr title="Використовувати за розсудом викладача">[1](#note_svn)</abbr></sup> - Subversion (SVN) client. В лабораторіях ОЦ НТУ "ХПІ" активувати використання *proxy-сервера* в меню *TortoiseSVN/Settings/Network*:
	- Enable Proxy Server;
	- Server address: `172.17.10.2`;
	- Port: `3128`.

4. [VisualSVN](https://www.visualsvn.com/visualsvn/download/) <sup><abbr title="Використовувати за розсудом викладача">[1](#note_svn)</abbr></sup> - Subversion integration plug-in for Visual Studio. [Getting started...](https://www.visualsvn.com/visualsvn/getting-started/)

5. [SVN Hosting](https://github.com) <sup><abbr title="Використовувати за розсудом викладача">[1](#note_svn)</abbr></sup> - веб-сервіс управління версіями:
	- потрібна попередня [реєстрація](https://github.com/join);
	- при реєстрації обов'язково вказувати **Username** у вигляді **surname-name** - прізвище та ім'я розробника [латинкою в нижньому регістрі](http://translit.kh.ua/?lat&passport);

---

<span id="lab_todo"></span>
## Спільні завдання

|  №  | Завдання |
|:---:|:---------|
|  1  | Розробити програму для рішення індивідуального завдання <sup><abbr title="Уточнення завдання за розсудом викладача">[2](#note_summary)</abbr></sup>. |
|  2  | Виконати [рефакторинґ](https://refactoring.guru/) з урахуванням загальних [вимог](#lab_requirements). |
|  3  | Підготувати до перевірки опис розробленої програми у вигляді [звіту](#lab_report). |
|  4  | Виправити програму з урахуванням отриманих зауважень. |

---

<span id="lab_requirements"></span>
## Вимоги

1. **Проекти** розміщувати в директоріях `surname-name/src/surnameXX`, де:
	- *surname-name* - назва особистої директорії в спільному сховищі *Subversion*;
	- *XX* - номер роботи.

2. **Початковий** код розташовувати в репозиторії лише той, що успішно компілюється та відповідає [Coding Conventions](https://github.com/ntxone/temp/raw/master/doc/cpp_coding_conventions.pdf).

3. **Звіти** розташовувати в директоріях `surname-name/doc/surnameXX`.

4. **Коментувати** текст програми для обробки пакетом [Doxygen](#doxy).

5. **Повідомлення** до коміту - що саме ви зберігаєте - має бути зрозумілим. На початку повідомлення вказувати:
	- **номер** тікета (завдання) - номер у [таблиці](#lab_todo), що містить список спільних завдань та зауважень;
	- **тему/компонент** до якого належить коміт. Наприклад:

		`#1, #3 shevchenko01: завдання виконано, звіт підготовлений до перевірки`
		
		`#2 task01: отформатирован текст и добавлены комментарии`
		
		`#4 Locator: алгоритм пошуку оптимізовано`
		
		`#4 task02: удалены лишние файлы`
		
		`#4 raeth: fix regression after [a002b90]`

6. **Назву** особистої директорії *surname* з відповідним номером роботи *XX* використовувати для іменування директорій **рішень**, **проектів** і **звітів** лабораторних робіт.

	Наприклад, студент з особистим каталогом `shevchenko-taras`
	
	- розробляє всі проекти у межах одного рішення *(Solution)* з назвою `shevchenko`;
	- для проектів *Visual C++* двох лабораторних робіт використовує назви `shevchenko01`, `shevchenko02` і відповідні шляхи:
		
		`shevchenko-taras/src/shevchenko01/shevchenko01.vcxproj`
		
		`shevchenko-taras/src/shevchenko02/shevchenko02.vcxproj`
		
	- для звітів використовує наступні шляхи і назви файлів:
		
		`shevchenko-taras/doc/shevchenko01/shevchenko01.odt`
		
		`shevchenko-taras/doc/shevchenko01/shevchenko01.pdf`
		
		`shevchenko-taras/doc/shevchenko02/shevchenko02.odt`
		
		`shevchenko-taras/doc/shevchenko02/shevchenko02.pdf`

7. **Checkout URL** для доступу до особистої директорії формується додаванням до *Checkout URL* спільного сховища назви особистої директорії. Наприклад:
	- загальне сховище має *Checkout URL:*

		`https://subversion.assembla.com/svn/kitXX-2016-cpp/`

	- тоді *Checkout URL* для доступу до особистої директорії *shevchenko-taras*:

		`https://subversion.assembla.com/svn/kitXX-2016-cpp/shevchenko-taras`

---

<span id="lab_report"></span>
## Звіт

1. **Оформляється** українською мовою та надається у вигляді електронних документів:
	- що редагується *(docx/doc/odt/html/md/txt)*;
	- що зручно проглядається *(pdf/djvu/chm)*.

2. **Формат** документа, що друкується:
	- A4 з полями: **2.5 см** зліва, **2 см** праворуч, **2 см** зверху, **2 см** знизу;
	- гарнітура: **Times New Roman**; кегль: **14**; міжрядковий інтервал: **одинарний**;
	- відступ першого рядка абзацу: **1.27 см**; вирівнювання: **у ширину**;
	- приклад див. у файлі [oop_appendix_2.pdf]().

3. **Структура** звіту:

| Обов'язковий розділ | Зауваження |
|:--------------------|:-----------|
| **Номер і тема роботи** | Вказується з вирівнюванням по центру рядка. |
| **Мета: ...** | Відповідає темі та завданню. |
| **1 ВИМОГИ** | Повне формулювання завдання. |
| **1.1 Розробник** | Інформація про розробника:<br> - чи є студентом, прізвище, ім'я, по батькові;<br> - назва академічної групи;<br> - номер варіанту. |
| **1.2 Загальне завдання** | Зауваження, обмеження та вимоги. |
| **1.3 Задача** | Прикладна задача відповідно до варіанта. |
| **2 ОПИС ПРОГРАМИ** | Внутрішня робота програми, її поведінка:<br> калькулювання даних, обробка даних<br> та інші функції програми. |
| **2.1 Функціональне призначення** | Призначення програми.<br> Обмеження на застосування. |
| **2.2 Опис логічної структури** | Алгоритм програми.<br> Використовувані методи.<br> Структура програми. |
| **2.3 Важливі фрагменти програми** | Частини тексту програми, що демонструють рішення задачі. |
| **3 СЦЕНАРІЙ ВИКОРИСТАННЯ** | Опис поведінки програми: "хто" і "що" може зробити.<br> Відповідає [функціональним вимогам](https://uk.wikipedia.org/wiki/%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D1%96%D0%BE%D0%BD%D0%B0%D0%BB%D1%8C%D0%BD%D1%96_%D0%B2%D0%B8%D0%BC%D0%BE%D0%B3%D0%B8).<br> Ілюструється за допомогою копій екрану з описом. |
| **ВИСНОВКИ** | Заключення стосовно повноти досягнення мети. |

---

<span id="references"></span>
## Рекомендації

- [C++ Reference](http://en.cppreference.com/).
- [C++ Language Tutorial](http://www.cplusplus.com/doc/tutorial/).
- [Standard C++ Library reference](http://www.cplusplus.com/reference/).
- [C++ STL Tutorial](http://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm).
- [Bjarne Stroustrup's homepage](http://www.stroustrup.com/).
- [C++ 11 FAQ от Бьярна Страуструпа](http://sergeyteplyakov.blogspot.com/2012/05/c-11-faq.html).
- [The C++ Standards Committee](http://www.open-std.org/JTC1/SC22/WG21/).
- [News, Status & Discussion about Standard C++](https://isocpp.org/).
- [Coding Standards](https://isocpp.org/wiki/faq/coding-standards).

---

## Online Compilers and IDEs

- [JDoodle](https://www.jdoodle.com/). Easy and Quick way to run Programs Online.
- [GDB Online](https://www.onlinegdb.com/). Online compiler and debugger tool for C/C++ languages.
- [Coding Ground](https://www.tutorialspoint.com/codingground.htm). An online Lab for IT Professionals.

---

## [Додатки]()

Розміщуються в директорії `!nfo/doc` вміст якої можна отримати, використовуючи наступный [Checkout URL]():
 
`https://svn.code.sf.net/p/kit26a-cpp/code/!nfo/doc/`

|  №  | Файл | Зміст |
|:---:|:-----|:------|
|  1  | [cpp_coding_conventions.pdf](https://github.com/ntxone/temp/raw/master/doc/cpp_coding_conventions.pdf) | Правила оформлення коду |
|  2  | [doxy.pdf](https://github.com/ntxone/temp/raw/master/doc/doxy.pdf) | Рекомендації до використання [Doxygen](#doxy) |
|  3  | [report.pdf](https://github.com/ntxone/temp/raw/master/doc/report.pdf) | Приклад альбому звітів |

---

<span id="notes"></span>
## Примітки

1. <span id="note_svn"></span>*SVN-репозиторій* та веб-сервіс управління версіями використовувати за розсудом викладача.

2. <span id="note_summary"></span>Уточнення завдання та засобів розробки за розсудом викладача.
