function [graph_data] = get_graph_lines(user_input, data_inputs)
    
    graph_data = string;

    graph_data(1) = [user_input(1) num2str(data_inputs(1))];
    graph_data(2) = [user_input(3) num2str(data_inputs(1))];
    graph_data(3) = [user_input(1) num2str(data_inputs(2))];
    graph_data(4) = [user_input(3) num2str(data_inputs(2))];


end