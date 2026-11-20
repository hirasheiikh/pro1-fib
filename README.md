# 🚀 pro1-fib · Programació 1 (C++)

> **Fonaments de programació imperativa, algorísmica, estructures de dades bàsiques i més de 200 resolucions oficials de Jutge.org de l'assignatura Programació 1 (PRO1) · Grau en Enginyeria Informàtica (UPC · FIB).**

[![Language](https://img.shields.io/badge/Language-C%2B%2B17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org)
[![University](https://img.shields.io/badge/UPC-FIB-0070BA?style=for-the-badge)](https://www.fib.upc.edu)
[![Platform](https://img.shields.io/badge/Judge-Jutge.org-FFA116?style=for-the-badge)](https://jutge.org)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg?style=for-the-badge)](LICENSE)

---

## 📌 Descripció

Aquest repositori recull les implementacions, exercicis de consolidació, avaluacions continuades, controls i **204 resolucions completes de problemes de Jutge.org** desenvolupats durant el curs de **Programació 1 (PRO1)** a la Facultat d'Informàtica de Barcelona (FIB · UPC).

L'assignatura estableix les bases sòlides de la programació estructurada, l'anàlisi de complexitat i el disseny algorísmic en **C++**.

---

## 📚 Blocs Temàtics i Continguts

El repositori s'estructura seguint el temari complet de l'assignatura i les col·leccions oficials de Jutge:

1. **P0 - Primer Contacte (`P0 - First contact/`):**
   - Entorn de treball, estructura bàsica de programes C++, flux d'entrada i sortida (`cin`, `cout`).

2. **P1 - Introducció & Seqüencialitat (`P1 - Introduction/`):**
   - Tipus de dades primitius (`int`, `double`, `char`, `bool`), operadors aritmètics i lògics, condicionals (`if`, `else`, `switch`).

3. **P2 & P3 - Bucles i Iteracions (`P2 - First Loops/`, `P3 - More Loops/`):**
   - Estructures de control iteratives (`while`, `for`, `do-while`), acumuladors, comptadors, invariants senzills de bucle i tractament de dígits.

4. **P4.1 & P4.2 - Tractament de Seqüències (`P4.1 - Sequence basics/`, `P4.2 - Sequence extension/`):**
   - Esquemes de cerca i de recorregut sobre seqüències d'elements amb consum lineal i memòria constant $\mathcal{O}(1)$.

5. **P5 - Funcions i Procediments (`P5 - Functions & Procedures/`):**
   - Descomposició modular de programes, pas de paràmetres per valor i per referència (`&`), àmbit de variables (*scope*), precondicions i postcondicions.

6. **P6 - Recursivitat (`P6 - Recursion/`):**
   - Disseny inductiu d'algorismes, casos base i casos recursius, arbres de crides recursives, recurrències lineals i múltiples (torres de Hanoi, sèrie de Fibonacci, escriptura de nombres).

7. **P7 - Vectors (`P7 - Vectors/`):**
   - Arrays unidimensionals (`std::vector`), cerca seqüencial, cerca dicotòmica / binària, ordenacions elementals (bombolla, selecció, inserció), fusions de vectors ordenats.

8. **P8 - Matrius i Vectors Multidimensionals (`P8 - Multidimensional Arrays/`):**
   - Matrius bidimensionals (`vector<vector<T>>`), operacions amb files i columnes, multiplicació de matrius, simetries i quadrats màgics.

9. **P9 - Estructures de Dades / Tuples (`P9 - Data Structures (tuples)/`):**
   - Definició de registres compostos (`struct`), manipulació de col·leccions d'estructures, combinació de tuples i vectors.

10. **P10 - Algorismes Fonamentals (`P10 - Fundamental Algorithms/`):**
    - Cerca dicotòmica avançada, algorismes eficients d'ordenació, anàlisi de complexitat asimptòtica.

11. **Consolidació, Controls i Avaluació (`Consolidation/`, `Controls i Exàmens P1/`, `Exercicis avaluació/`):**
    - Resolució de problemes de síntesi, exàmens parcials i exercicis d'avaluació continuada amb màxima qualificació (AC / veredicte verd).

---

## 📁 Estructura del Repositori

```text
pro1-fib/
├── P0 - First contact/                # 2 problemes introductoris
├── P1 - Introduction/                 # 18 problemes d'introducció
├── P2 - First Loops/                  # 21 problemes de bucles
├── P3 - More Loops/                   # 12 problemes iteratius avançats
├── P4.1 - Sequence basics/            # 16 problemes de seqüències bàsiques
├── P4.2 - Sequence extension/         # 8 problemes de seqüències esteses
├── P5 - Functions & Procedures/       # 21 problemes de funcions i procediments
├── P6 - Recursion/                    # 16 problemes de recursivitat
├── P7 - Vectors/                      # 16 problemes de vectors
├── P8 - Multidimensional Arrays/      # 7 problemes de matrius
├── P9 - Data Structures (tuples)/     # 12 problemes d'estructures
├── P10 - Fundamental Algorithms/      # 10 problemes d'algorismes fonamentals
├── Consolidation/                     # 13 problemes de consolidació
├── Controls i Exàmens P1/             # 4 problemes de controls i exàmens
├── Exercicis avaluació/               # 28 problemes d'avaluació continuada
├── .gitignore                         # Ignora binaris i fitxers temporals
└── README.md                          # Documentació del repositori
```

---

## 🛠️ Compilació i Execució

Tots els fitxers font estan escrits en C++ estàndard i compilats seguint els flags del jutge automàtic de la FIB:

```bash
# Compilació amb flags estrictes de Jutge
g++ -O2 -std=c++17 -Wall -Wextra nom_problema.cc -o nom_problema

# Execució amb entrada interactiva o fitxer
./nom_problema < input.txt
```

---

## 📄 Llicència

Distribuït sota la llicència MIT.
