7. а Дан базовый интерфейс для представления графа:
class IGraph {
	virtual ~IGraph() {}
	virtual void AddEdge(int from, int to) = 0;
	virtual int VertexCount() const  = 0;
virtual std::vector<int> GetNextVertexes(int vertex) const = 0;
virtual std::vector<int> GetPrevVertexes(int vertex) const = 0;
};

Необходимо написать несколько реализаций интерфейса:
CListGraph, хранящий граф в виде массива списков смежности
CMatrixGraph, хранящий граф в виде матрицы смежности
CSetGraph, хранящий граф в виде массива хэш-таблиц
CArcGraph, хранящий граф в виде одного списка
Для каждой реализации необходимо написать конструктор от IGraph* для поддержания возможности конвертации между реализациями.
7. б При помощи одной из реализаций необходимо решить задачу:
Дан ориентированный граф. Определите, какое минимальное количество ребер необходимо добавить, чтобы граф стал сильносвязным. Предложите алгоритм для нахождения этих ребер.
Оценить время работы для каждой реализации.
