CXX := g++
CXXFLAGS := -std=c++17 -g -IGraphics -ICoreGUI `pkg-config gl glu glut gtkmm-4.0 --cflags`
LDFLAGS := `pkg-config gl glu glut gtkmm-4.0 --libs`

OBJS := main.o CoreGUI/input.o


asim: $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) asim
