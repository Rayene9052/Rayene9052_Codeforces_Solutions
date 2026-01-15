Tetrahedron=4
Cube=6
Dodecahedron=12
Icosahedron=20
Octahedron=8
polyhedrons = {
        'Tetrahedron': Tetrahedron,
        'Cube': Cube,
        'Dodecahedron': Dodecahedron,
        'Icosahedron': Icosahedron,
        'Octahedron': Octahedron
    }
n=int(input())
somme=0
for i in range(n):
    polyhedron=input()
    if polyhedron in polyhedrons:
        somme+=polyhedrons[polyhedron]
print(somme)