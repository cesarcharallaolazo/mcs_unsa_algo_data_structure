import glob


def get_data_experiments_dict():
    experiments_dict = {}

    for txt in glob.glob("./practice_1/python/Bases_Datos_Numeros/*.txt"):
        experiment = txt.split("/")[-1].split("-")[0]
        # print(experiment)
        with open(txt) as f:
            numbers = f.read().split("\n")
        numbers = list(map(int, numbers))

        experiments_dict[experiment] = numbers

    return experiments_dict


if __name__ == '__main__':
    x = get_data_experiments_dict()
