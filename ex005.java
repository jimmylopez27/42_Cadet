class Edge {
    private Graphnode destination;
    private double weight;

    public Edge(Graphnode destination, double weight) {
        this.destination = destination;
        this.weight = weight;
    }
}

class Graphnode {
    private Object data;
    private ArrayList<Edge> successors;

    public Graphnode(Object data) {
        this.data = data;
        successors = new ArrayList<Edge>();
    }

    public void addSuccessor(Graphnode node, double weight) {
        successors.add(new Edge(node, weight));
    }
}

class Graph {
    private ArrayList<Graphnode> nodes;

    public Graph() {
        nodes = new ArrayList<Graphnode>();
    }
}


// In the Graphnode class
private boolean visited = false;

public void setVisited(boolean visited) {
    this.visited = visited;
}

// In the Graph class
public void resetVisited() {
    for (int i = 0; i < nodes.size(); i++) {
        Graphnode node = (Graphnode) nodes.get(i);
        node.setVisited(false);
    }
}


public void numberGraph() throws CycleException {
    // Mark all nodes as unvisited
    for (Graphnode<T> node : nodes) {
        node.setMark(UNVISITED);
    }

    int number = nodes.size();

    // Number every component of the graph
    for (Graphnode<T> node : nodes) {
        if (node.getMark() == UNVISITED) {
            number = topNum(node, number);
        }
    }
}



public boolean isConnected() {
    if (nodes.isEmpty()) {
        return true;
    }

    // Mark all nodes as unvisited
    for (Graphnode<T> node : nodes) {
        node.setVisited(false);
    }

    // Start traversal from the first node
    visitConnected(nodes.get(0));

    // Check whether every node was visited
    for (Graphnode<T> node : nodes) {
        if (!node.getVisited()) {
            return false;
        }
    }

    return true;
}

private void visitConnected(Graphnode<T> node) {
    node.setVisited(true);

    // Visit successors
    for (Graphnode<T> next : node.getSuccessors()) {
        if (!next.getVisited()) {
            visitConnected(next);
        }
    }

    // Visit predecessors
    for (Graphnode<T> previous : node.getPredecessors()) {
        if (!previous.getVisited()) {
            visitConnected(previous);
        }
    }
}


