# 🎨 Computer Graphics — 4 Quadrant Flags Using OpenGL

A simple **Computer Graphics project using C++, OpenGL, and GLUT** that demonstrates how to draw four national flags inside a **2D Cartesian coordinate system** divided into four quadrants.


## 🛠️ Technologies Used

- C++
- OpenGL
- GLUT
- GLU
- Windows

## 📚 OpenGL Concepts Used

This project demonstrates several fundamental Computer Graphics concepts:

- 2D Cartesian coordinate system
- Orthographic projection
- `gluOrtho2D()
- OpenGL drawing primitives
- RGB color representation
- Lines
- Rectangles
- Polygon shapes
- GL_LINES
- GL_QUADS
- GL_LINE_LOOP
- GL_TRIANGLE_FAN

## 📐 Coordinate System

The project uses a four-quadrant coordinate system:


                       +Y
                        |
          II            |             I
                        |
      Yugoslavia        |          Morocco
                        |
------------------------+------------------------ +X
                        |
         Norway         |           Greece
          III           |             IV
                        |
                       -Y
```

The coordinate system is initialized using:

gluOrtho2D(-40.0, 40.0, -40.0, 40.0);


Therefore:

- X-axis: `-40` to `40`
- Y-axis: `-40` to `40`

## 🖼️ Output

![4 Quadrant Flags](screenshot.png)

The program displays all four flags simultaneously in their respective quadrants.

## 🚩 Flag Construction

Each flag is constructed using basic OpenGL primitives.

### Morocco

The Moroccan flag uses:

- Red rectangular background
- Green five-pointed star
- Black border

### Yugoslavia

The Yugoslavian flag uses:

- Blue stripe
- White stripe
- Red stripe
- Yellow outer star
- Red inner star
- Black border

### Norway

The Norwegian flag uses:

- Red background
- White cross
- Blue cross
- Black border

### Greece

The Greek flag uses:

- White background
- Blue stripes
- Blue canton
- Cross pattern
- Black border



## ▶️ How to Run

### Requirements

You need:

- C++ compiler
- OpenGL
- GLUT/FreeGLUT
- Windows


> The compilation command may vary depending on your compiler and OpenGL/GLUT setup.


## 👨‍💻 Author

**Mirza Fahim Abdullah**

Computer Science & Engineering  
American International University-Bangladesh (AIUB)

