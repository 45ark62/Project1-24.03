# Project1-24.03
При помощи библиотеки GLFW,мы создали окно,создали точку,создали треугольник

/* Создание окна
window = glfwCreateWindow(640, 480, "RenderSceneCB", NULL, NULL);//создаем окно с размерами 640 на 480 с названием RenderSceneCBПоследние два параметра
у glfwCreateWindow позволяют задать монитор, на котором нужно создать окно (четвертый аргумент функции), и указать другое окно, с контекстом которого
мы будем совместно использовать ресурсы OpenGL (пятый параметр).
glfwPollEvents - берет сообщения из очереди и обрабатывает их. Если в очереди нет ни одного сообщения, то управление немедленно возвращается.
/* Make the window's context current / glfwMakeContextCurrent(window); 
/ установка цвета */ glClearColor(1, 1, 1, 1);
glClear(GL_COLOR_BUFFER_BIT);//создание цвета
glPointSize(10);//задаём размер точки 
glBegin(GL_POINTS);//создание точки начало программы 
glColor3f(0, 0, 0);//цвет точки 
glVertex3f(0.75,0,0.75);//расположение точки
glEnd();конец создания точки

glBegin(GL_TRIANGLES);//создание треугольника
glColor3f(0, 0, 0);//установка цвета-черный
glVertex2f(0.5, 0.5);//расположение треугольника
glVertex2f(-0.5,0.5);//
glColor3f(1, 0, 0);//красный цвет
glVertex2f(-0.5, -0.5);
glVertex2f(0.5, -0.5);
/* поменять местами передний и задний буфер */
glfwSwapBuffers(window);
