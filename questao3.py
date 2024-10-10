import json

# Simulacao de um arquivo JSON depois de ser lido
json_data = '''{
    "valores": [
        234, 789, 0, 456, 123, 0, 654, 0, 321, 1000,
        678, 0, 12, 34, 567, 890, 0, 290, 101, 0,
        220, 320, 910, 15, 299, 0, 817, 200, 504, 999,
        400, 88, 0, 0
    ]
}'''

data = json.loads(json_data)

valores = data['valores']

valores_filtrados = [v for v in valores if v != 0]

valor_min = min(valores_filtrados)
valor_max = max(valores_filtrados)
media = sum(valores_filtrados) / len(valores_filtrados)
num_dias_sup = sum(1 for v in valores_filtrados if v > media)

print(f"Valor mínimo: {valor_min}")
print(f"Valor maximo: {valor_max}")
print(f"Dias com faturamento superior a media: {num_dias_sup}")